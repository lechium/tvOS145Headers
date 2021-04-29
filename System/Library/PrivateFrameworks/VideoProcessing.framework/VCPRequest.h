/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPRequest : NSObject {

	BOOL _useCPUOnly;
	unsigned _revision;
	int _width;
	int _height;
	int _maxNumHands;
	int _humanActionWindowSize;

}

@property (nonatomic,readonly) BOOL useCPUOnly;                //@synthesize useCPUOnly=_useCPUOnly - In the implementation block
@property (nonatomic,readonly) unsigned revision;              //@synthesize revision=_revision - In the implementation block
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(unsigned)revision;
-(BOOL)useCPUOnly;
-(unsigned)preferredPixelFormat;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
@end
