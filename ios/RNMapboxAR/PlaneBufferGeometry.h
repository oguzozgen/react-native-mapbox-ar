//
//  PlaneBufferGeometry.h
//  RNLocateTest
//
//  Created by Dave Prukop on 4/30/18.
//  Copyright © 2018 Facebook. All rights reserved.
//

#import "BufferGeometry.h"

@interface PlaneBufferGeometry : BufferGeometry

@property (assign) int width;
@property (assign) int height;
@property (assign) int widthSegments;
@property (assign) int heightSegments;

- (instancetype)initWithWidth:(int)width andHeight:(int)height andWidthSegments:(int)widthSegments andHeightSegments:(int)heightSegments;

@end
