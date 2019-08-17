# A.B.'s Cookbook: PDF and PHP: All about libraries, pdftk, and more 

**Make sure to read the security information regarding Imagemagick before you use it to convert PDFs!**

This guide goes well beyond simply PHP, and is generally a overview of using PDF in code.

## General Resources

If you are interested in writing a PDF library or learning the PDF format, I highly recommend [PDF Explained by John Whitington](https://www.oreilly.com/library/view/pdf-explained/9781449321581/index.html)
(2011, O'Reilly Media, ISBN: 9781449321581). You can read it free using the O'Reilly trial as of August 2019. 

 - [Adobe Official PDF Reference Page] if you want to get your hands dirty with PDF.
 - [One of many PDF Specifications](https://www.adobe.com/content/dam/acom/en/devnet/pdf/pdfs/PDF32000_2008.pdf) - Massive PDF (ha)
 - If you are using linux [Master PDF Editor](https://code-industry.net/masterpdfeditor/) is legitimately worth $70.00 if
you need to edit PDFs.  I personally have purchased and used it, it is great.
- If you do not want to pay $70 but need to fill in a form on Linux, try [this post regarding using GIMP manually](https://www.linuxquestions.org/questions/linuxquestions-org-member-success-stories-23/how-to-fill-pdf-forms-even-read-only-%3B-better-than-acroread-v9-for-linux-796720/).
 - If you are using imagemagick, you might as well learn about [Ghostscript](https://www.ghostscript.com/doc/9.27/Use.htm#PDF)
 which it uses on the backend.

See below for pdftk, Imagemagick resources.
   
[Adobe Official PDF Reference Page]: https://www.adobe.com/devnet/pdf/pdf_reference.html

## Imagemagick (PDF to Other Formats)

Imagemagick is used to convert an infile of "PDF" to any format that is not
already PDF.   

Please note this is for good reason.  Imagemagick is _very_ good at dealing with
pixel-based formats like JPG.  However, even using imagemagick to merge multiple
PDFs into a single multi-page PDF will result in rasterization of vectors, and
thus a very large filesize / loss of vector information.

### **Security**

Using Imagemagick and PDF is somewhat dangerous.

It seems due to ghostscript specifically there is the possibility of specially 
crafted PDFs that can execute arbitrary code when converted to any other image format.

See > https://cromwell-intl.com/open-source/pdf-not-authorized.html

**Ensure you are using a security policy.  Effectively, any imagemagick tool
ran against arbitrary inputs MUST be set to have no ability to write/execute 
things.**

### Resources

 - https://imagemagick.org/script/formats.php (Imagemagick - Formats & Implementation Specific Details)
 - https://imagemagick.org/discourse-server/viewtopic.php?t=23516 (Imagemagick - Regarding PDF->PNG High Quality)
 - https://aleksandarjakovljevic.com/convert-pdf-images-using-imagemagick/ - `convert` Usage for PDF->X with Imagemagick
 - https://stackoverflow.com/questions/6605006/convert-pdf-to-image-with-high-resolution
 - For imagemagick, `72*DESIRED_WIDTH/CURRENT_SIZE=DPI_WANTED` tends to work, then call via   
 `convert -colorspace rgb -density {desiredDpi}`  
 See: https://imagemagick.org/discourse-server/viewtopic.php?t=19676 for slightly more details.

## pdftk

`pdftk` is a free open source tool and is probably the most complete, free implementation of the PDF format available to
any command-line / shell.  Many tools across various languages use it in varying ways.  It can repair PDFs, merge PDFs,
read encrypted PDFs, and likely the most important part to library authors is it appears to be able to downgrade PDFs
using very new PDF formats.  

Therefore, it is used by at least a couple of libraries below, with the idea being if the original library fails to read
a particular PDF, it will then pass it through `pdftk` via the command line to repair and/or downgrade it, then again 
attempt to read it.

**As with MANY of the PDF libraries given here**, it also has commercial software/libraries available for sale alongside 
the FOSS offering.  It's hard out there for a PDF library author, apparently.

 - Official site: https://www.pdflabs.com/tools/pdftk-the-pdf-toolkit/   

## PDF+PHP: A good mix, apparently

PHP has some of the best free & open source PDF support/libraries out of *any* language.

### Libraries Explained / Overview

- `FPDF` is big dick daddy.  Was written about the time Nixon was taking oath, horribly formatted, poor error handling, 
but ridicuosly feature rich.   
  - Official: http://fpdf.org (Written by Olivier Plathey, `codeshell` on github)
  - Scripts: http://www.fpdf.org/en/script/index.php
  - Package: (UNOFFICIAL) `setasign/fpdf`.  **Note the "setasign".**
  - fpdf-easytable: https://github.com/fpdf-easytable/fpdf-easytable
  - Remember to look under "Scripts" on their official site.

- `tFPDF`, which is sometimes referenced as if it is own separate full-featured library.  But it's just a very small 
modification to FPDF and is actually available on their site: 
  - See here: http://fpdf.org/en/script/script92.php 
  - Package: (unofficial) `setasign/tfpdf`.  **Note the "setasign"**

- `tcPDF` which is written by 'tecnick' (tecnickcom on github).  Package is fairly different than FPDF but seems to still
be somewhat based upon it.  Very, very complete as well - more complete than FPDF but probably more buggy.  Has hundreds
of forks and PRs pending.  Guy is somewhat active still.
  - Official: https://tcpdf.org/ (Written by Nicola Asuni, -- documentation is for tc-lib-pdf see below)
  - Github: https://github.com/tecnickcom/TCPDF
  - Official Package: `tecnickcom/tcpdf`
  - [Sad Issue under library](https://github.com/tecnickcom/tc-lib-pdf/issues/18)
  - [Add-on to print custom labels with tcpdf](https://packagist.org/packages/uskur/pdf-label)
 
- `tc-lib-pdf` which is also written by N. Asuni, as a "UNDER DEVELOPMENT (NOT READY)" but hasn't had a commit since 
June 18, 2018.  However it does have some activity under PR's and elsewhere.   Has a very strange C-like build system 
with a make file, that pulls in dependencies from composer but no official  or unofficial composer package.  Quite 
incomplete but very well structured and documented.  In fact, it has documentation for code that doesn't even exist.
  - Official: https://tcpdf.org/ (Written by Nicola Asuni
  - Github: https://github.com/tecnickcom/tc-lib-pdf (this is the meta package, many more from there)
  - ex. https://github.com/tecnickcom/tc-lib-pdf-page

- `PDFI` is "PDF Importer".  This is the **setasign** guys.    

- `mPDF` is yet another FPDF fork (I think).  It is however meant for HTML->PDF specifically.  FPDM, I believe, is some 
work that is an offshoot of mPDF.  It cannot fill forms, but has a pretty decent reference page (below).
  - Official: http://www.mpdf1.com
  - More Ofificlal: https://mpdf.github.io/what-else-can-i-do/forms.html
  - Github: https://github.com/mpdf/mpdf

- `FPDM` is a library for filling out PDF forms.  It actually says that it's written by the same guy that wrote the FPDF
library, but this is not true according to Oliver himself.  It is apparently based on 
an [FPDF Script](http://www.fpdf.org/en/script/script93.php) by the same name.  Not all PDFs are apparently supported
however it will pass anything unsupported through pdftk to - do something - to make it compatible with the basic parser 
here.
  - Unofficial: https://github.com/codeshell/fpdm (about as close as official as you'll get) 

- SetasignPDF-Core - A **very expensive ($300-$1,000+ USD)** set of PHP/PDF libraries.  Has basic PDF support for 
  encrypted, unencrypted, XFA, AcroForms, and so on but obviously is not FOSS.  **Setasign also offers several 
  compatibility layers for their commercial product, so don't get it confused with FPDF, etc.  As they also, confusingly
  host the composer versions of several pre-composer libraries such as FPDF**.  (@TODO Should I just host a copy of my 
  own for FOSS sake?) ... Write your own. 

- (After this, the quality of my list gets worse, @TODO)

- https://github.com/mikehaertl/php-pdftk (No research done)
- https://github.com/msztorc/svg-convert - Convert SVG to PNG/PDF
- https://github.com/eureka2/acroforms - Rewrite of "Script 93" (aka FPDM).  Uses pdftk as a backup to downgrade PDF.
 - https://github.com/Ghostfly/PDFFormsFiller - Confused me initially - only takes output from other applications that
 actually parse PDF, converts it, and sends it back (eg pdftk).  Might as well just use pdftk.
 - https://github.com/baikunz/Slurpy Speaking of which, slurpy is a pdftk<->php "interface" to abstract away the command
 line execution of pdftk.
 - https://packagist.org/packages/etecc/pdffill - Similar to slurpy and ghostfly
 - https://packagist.org/packages/cpierce/pdf2text - Client library for extracting text form PDF
 - `knplabs/knp-snappy-bundle` - Some sort of PDF library integrated with Symfony.  May use a third party PDF library 
  under the hood.  I am not sure.  
 - `cpierce/pdf2text` - What it sounds like.
 - https://sourceforge.net/projects/html2fpdf/ - Abandoned html2pdf 
 - https://github.com/spatie/pdf-to-image - Maybe a dupe, another imagemagick frontend
 - http://pdml2.sourceforge.net/ - "PHP library for creating PDFs from a document in a simple HTML format".  Likely
 abandoned. 
 - [Yet another abandoned library](http://rhodopsin.blogspot.com/2009/11/php-class-adds-svg-images-to-pdf-files.html) that adds SVG to PDF.

### Other PHP Resources

 - [FPDM Forum Conversation Regarding Filling Forms](http://www.fpdf.org/phorum/read.php?f=1&i=59640&t=59640)
 - [Another forum post](http://www.fpdf.org/phorum/read.php?f=1&i=59567&t=59567)
 - [Bug in PDFM](http://www.fpdf.org/phorum/read.php?f=1&i=59606&t=59606)
 - http://webcheatsheet.com/php/reading_clean_text_from_pdf.php - A simple tutorial on reading raw PDF data from PHP.
 
## Other Languages

### C Language, C++

 - https://pdfium.googlesource.com/pdfium/ - Official Google PDF Viewer
 - [PDF Theory of Opreation at SKIA PDF Library](https://skia.org/dev/design/pdftheory) - C++ library, also a not-horrible
 general reference.
 - `xpdf`, of course.  `xpdf` is generally the de-facto pdf viewer for Linux, BSD.  The only other real option being 
  Google Chrome's.  Open source but not much you can do with it command-line.  Also backed by a commercial entity that
  sells proprietary PDF libraries.
   - Official: http://www.xpdfreader.com/
   - List of tools: http://www.xpdfreader.com/about.html
   - Commercial Non-Free Offerings: http://www.glyphandcog.com/products.html
 - http://gap.nongnu.org/pdfkit/index.html#description - Fork of xpdf, Objective-C
 - http://libpdfxx.sourceforge.net/index.html - libpdfdoc - "It provides classes and functions for reading and writing 
 to PDF files." (C++)
 
### Python

 - https://github.com/reingart/pyfpdf - Simple PDF generation for Python (FPDF PHP port).  No edit, just generate. 
   - (also: https://code.google.com/p/pyfpdf/)
 - [PDFMiner](https://euske.github.io/pdfminer/index.html) - "focuses entirely on getting and analyzing text data. PDFMiner 
 allows one to obtain the exact location of text in a page, as well as other information such as fonts or lines. 
 It includes a PDF converter that can transform PDF files into other text formats (such as HTML). It has an extensible 
 PDF parser that can be used for other purposes than text analysis."
   - Pypi: https://pypi.org/project/pdfminer/ 

### Rust

 - https://github.com/jrmuizel/pdf-extract - "A rust library for extracting content from pdfs"
 - https://github.com/saethlin/pdfpdf
 - https://github.com/pdf-rs/pdf - "Library library to read (and possibly modify and write) PDF files."
 
### Other / Unknown

  - **Apache PDFBox** - https://pdfbox.apache.org/ (Java)
  - `mbtPdfAsm` - French-language.  Windows Only.  Basically a scriptable PDF merger.
  - https://github.com/yob/pdf-reader - Ruby, very high quality.
  - https://stackoverflow.com/questions/58730/open-source-pdf-library-for-c-c-application - List of even more not listed
  here.
  - https://www.debenu.com/products/development/debenu-pdf-library/ - Commercial
  - https://itextpdf.com/en - Commercial (Saas?)
  - Very low quality stuff ahead:
    - http://www.pdf995.com/download.html - Some kind of windows sdriver.  Maybe FOSS?
    - http://pdf-house.blogspot.com/ - A badly formatted "blog" listing a bunch of mostly commercial libraries but has
    a few good ones possibly not listed here.
    
---
(C) Copyright 2019 A.B. Carroll (http://github.com/abcarroll/abcarroll)  \
See [meta/META.md](meta/META.md) for full use, licensing, and copyright details.