/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCVideoFrameUtil : NSObject
+(id)newXPCDictionaryWithCVPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_AV88)arg3 ;
+(CVBufferRef)CVPixelBufferFromXPCDictionary:(id)arg1 isDepth:(BOOL)arg2 ;
+(SCD_Struct_AV88)CMTimeFromXPCDictionary:(id)arg1 ;
@end

