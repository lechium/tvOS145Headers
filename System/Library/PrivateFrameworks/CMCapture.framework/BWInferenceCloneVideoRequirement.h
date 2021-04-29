/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	BWInferenceVideoRequirement* _sourceVideoRequirement;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * sourceVideoRequirement;              //@synthesize sourceVideoRequirement=_sourceVideoRequirement - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)videoFormat;
-(BWInferenceVideoRequirement *)sourceVideoRequirement;
-(id)initWithCloneVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 sourceVideoRequirement:(id)arg2 ;
@end
