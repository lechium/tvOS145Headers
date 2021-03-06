/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {

	AVMetadataOfflineVideoStabilizationMotionObjectInternal* _offlineVISMotionObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)offlineVideoStabilizationMotionObjectWithTime:(SCD_Struct_AV0)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSDictionary *)payload;
-(id)initWithTime:(SCD_Struct_AV0)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
@end

