/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustmentStack.h>

@class IPAPhotoAdjustmentPipeline;

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack {

	long long _orientation;
	IPAPhotoAdjustmentPipeline* _pipeline;
	PFIntSize_st _inputSize;

}

@property (assign,nonatomic) PFIntSize_st inputSize;                             //@synthesize inputSize=_inputSize - In the implementation block
@property (assign,nonatomic) long long orientation;                              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) IPAPhotoAdjustmentPipeline * pipeline;              //@synthesize pipeline=_pipeline - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(PFIntSize_st)inputSize;
-(void)setInputSize:(PFIntSize_st)arg1 ;
-(id)maskUUIDs;
-(IPAPhotoAdjustmentPipeline *)pipeline;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
-(void)setPipeline:(IPAPhotoAdjustmentPipeline *)arg1 ;
@end

