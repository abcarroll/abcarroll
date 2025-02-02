# VoIP Caller ID Information

## Before Cellphones, Things Were Simple

When I was around 15 years old, cellphones were not yet ubiquitous. Around 2004-2005, I discovered the Asterisk PBX software and a VoIP provider called *nuphone*. What made *nuphone* unique was its affordability—you could purchase a toll-free DID (phone number) for just $2.00 per month, and inbound calls to it were free.

Back then, payphones were still common, and at the time, you could call toll-free numbers from a payphone without inserting any money. I set up a special *1-800* number that, when dialed, would play a fake voicemail greeting. However, if I entered a specific numeric sequence during the greeting, it would drop me into a private console.

From this console, I had several options:

- I could set my outbound caller ID to any number I wanted, with the default being my home VoIP line.
- I could wait for an incoming call to my home VoIP line, which was connected to a real telephone in my bedroom.
- I could dial back out, effectively bypassing the payphone’s charges while only incurring a minimal per-minute fee (less than $0.01/min) to my VoIP provider for trunking.

At the time, I used *nuphone* for the toll-free DID (inbound calls) and *CallWithUs* for outbound calls (origination/trunking) and local DIDs (local phone numbers). I paid around $5.00 per month to a VPS provider to host my Asterisk instance.

There were no laws, regulations, or restrictions preventing me from setting any Caller ID information I wanted. It was a different time in the VoIP landscape, before the regulatory environment changed dramatically.

## Today, It's Not as Easy

Recently, I had a project where I needed to be able to set my Caller ID to an arbitrary outbound phone number. Apparently, due to the *crazy* amount of spam now commonplace with regular phone numbers, it is getting increasingly difficult to find a VoIP provider that allows this.

This is due to FCC regulations which were enacted in 2009, 2019, and 2020.

- **2009 – Truth in Caller ID Act:** This law made it illegal to knowingly transmit misleading or inaccurate caller ID information with the intent to defraud, cause harm, or wrongfully obtain something of value. Violations can result in fines of up to $10,000 per incident, with a maximum penalty of $1,000,000. Exceptions are made for law enforcement and other authorized activities.

- **2019 – TRACED Act:** This law expanded the FCC’s authority to penalize robocallers and mandated stricter enforcement of caller ID regulations. It also required major telecom providers to develop and implement robocall mitigation strategies, pushing the industry toward stronger authentication mechanisms for call verification.

- **2020 – SHAKEN/STIR Implementation:** The FCC mandated the adoption of the SHAKEN/STIR (Secure Handling of Asserted information using toKENs / Secure Telephony Identity Revisited) framework for all major carriers by June 30, 2021. This system digitally signs caller ID information at the network level to prevent spoofing and displays "Verified Caller" labels on many mobile devices.

The SHAKEN/STIR system is now a core requirement for most telecom providers and has significantly impacted VoIP services by restricting the ability to set arbitrary caller ID information. Calls that are not properly authenticated are often flagged as "Potential Spam" or rejected outright by the recipient's carrier.

### How SHAKEN/STIR Works

1. When a call is made, the originating provider **digitally signs** the Caller ID using cryptographic authentication.
2. The call is assigned one of three **attestation levels**:
   - **Full Attestation (A):** The provider verifies the caller and their right to use the number.
   - **Partial Attestation (B):** The provider knows the caller but cannot verify the number's ownership.
   - **Gateway Attestation (C):** The call originates from an unverified source but is still allowed through the network.
3. The receiving carrier **verifies the digital signature** before displaying the call as "Verified."

## Caller ID with Asterisk, FreeSWITCH, or a Simple Android Phone

### Asterisk
Asterisk allows setting Caller ID in its dial plan using:
```plaintext
exten => 123,1,Set(CALLERID(num)=5555555555)
exten => 123,n,Dial(SIP/flowroute/1234567890)
```
For outbound SIP trunks, you can configure Caller ID in `sip.conf`:
```plaintext
[flowroute]
type=peer
host=sip.flowroute.com
fromuser=5555555555
sendrpid=yes
callerid="My Caller ID" <5555555555>
```

### FreeSWITCH
In FreeSWITCH, Caller ID can be set using the dial plan:
```xml
<extension name="set_callerid">
    <condition field="destination_number" expression="^123$">
        <action application="set" data="caller_id_number=5555555555"/>
        <action application="bridge" data="sofia/gateway/flowroute/1234567890"/>
    </condition>
</extension>
```

### Simple Android Phone
For those using VoIP on Android, **Sipdroid** is a great SIP client. It works with providers like Flowroute and Twilio and has straightforward Caller ID settings. However, unless the Caller ID is verified, SHAKEN/STIR will assign it a **C-level attestation**, meaning it will not be displayed as "Verified" on the receiving end.

## Final Thoughts

While setting arbitrary Caller ID information with VoIP is becoming increasingly restricted, some providers still allow it with special permissions. However, **SHAKEN/STIR prevents unverified numbers from displaying as "Verified."** It is important to note that using improper Caller ID information can be a regulatory violation. However, there are legitimate use cases where passing the original caller's ID is necessary. One such example is **call forwarding**, where the forwarding system needs to pass the original caller's number to the recipient. In this case, the outbound call appears to come from the original caller, rather than the forwarding system, which ensures continuity and accurate identification of the calling party. Understanding how CID is transmitted over traditional telephony, SIP, and VoIP systems such as Asterisk and FreeSWITCH can help navigate these restrictions effectively.

