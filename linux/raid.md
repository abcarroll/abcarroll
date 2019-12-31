# RAID Levels & RAID on Linux / BSD

(Even I forget sometimes)

- JBOD != RAID 0, JBOD usually refers to two or more disks used as a single logical volume, but non-striped.  RAID0 usually implies that adding a third disk with parity, etc would increase redundancy.  This isn't possible with JBOD.
- RAID0 is striped zero fault tolerance.
- RAID1 is mirrored disks
  - Write performance shouldn't be significantly affected but does generally require both disks write before a logical operation is deemed complete.
  - Read performance is increased by approx. 2x, subject to limitations on controller, especially with software RAID.  If your controller only supports (`DiskRead*2*0.85`) then that's the perf. you get.  If they are on separate controllers, channels, with sufficient bandwidth all the way through, then you'll see just shy of 2x i/o bandwidth increase but plausibly a latency increase.
- RAID5 is striping with parity, allowing a single drive failure for every two drives at the expense of 1 drive per 2 (33%) for parity.
- RAID6 is double parity.  2 drives per 3, at the expensive of 2 drives per 3.
- RAID10, .. better put as "1+0".  Mirroring a RAID0 or JBOD results in high throughput.  Requires 4 disks min. and can take up to 50% failure before data-loss occurs.

## Software RAID

### Linux

Linux uses `mdadm` for software RAID, and while I've been using it for years it's not as nice as BSD's.  `cat /proc/mdstat` to check RAID status.  There is no built in packages I'm aware of in Debian to alert you to a failing RAID set.  So you could be running degraded and not even know it.  Use `systray-mdstat` for Desktops, 

### NetBSD

- NetBSD is `raidframe` and is very easy to use.

