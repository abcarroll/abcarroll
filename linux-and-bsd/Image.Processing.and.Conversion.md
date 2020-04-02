# Image Processing and Conversion

Quick tips / cookbook for command-line and other automation of image processing, manipulation, and conversions.

Imagemagick should basically be considered the swiss-army-knife of automated GUI-less image manipulation.  Simply install the `imagemagick` package.  

The supplied manpages and even HTML documentation can be lacking.  See:

- http://www.imagemagick.org/Usage/

For a far better resource.  

## Resize Proportionally and Non-Proportionally

```sh
# proportionally scale
convert -resize 640x480 input.jpg output.jpg

# forcefully resize (output will match dimensions exactly; the ! must be escaped as given)
convert -resize 640x480\! input.jpg output.jpg
```

## Combine multiple images into a single "image sequence", or "append"

Surprisingly difficult to explain with words.  Note the `+` vs `-` is important.  For "top to bottom" so that "A" is stacked upon "B", use `-append` instead, swapping the `+` for `-`.

```sh
# > Stack three images on top of each other
convert -append top.jpg middle.jpg bottom.jpg output.jpg

# > Similarly, "stack" them left-to-right instead -- the only thing
# that has changed is "-append" became "+append".  
# > In this example, we've seamlessly changed the format from PNG 
# and applied a JPEG quality to the output as well.
convert -quality 50 -append left.png middle.png right.png output.jpg
```

Note that appending several large images and/or transcoding to a different format can be quite CPU intensive.  Combining three JPEG 4160x3120px images, and transcoding to PNG took 25s on a quad-core workstation.



