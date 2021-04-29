/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) float volume; 
-(unsigned long long)type;
-(id)initWithVolume:(float)arg1 ;
-(float)volume;
-(NSString *)outputDeviceUID;
-(id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
@end
