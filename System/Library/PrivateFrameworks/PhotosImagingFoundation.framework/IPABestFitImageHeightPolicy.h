/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitImageHeightPolicy : IPAImageSizePolicy {

	double _fitHeight;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)initWithHeight:(double)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
@end

