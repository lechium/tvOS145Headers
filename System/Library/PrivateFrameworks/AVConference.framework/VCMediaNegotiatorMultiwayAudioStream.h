/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {

	NSMutableSet* _supportedAudioPayloads;

}

@property (nonatomic,retain) NSSet * supportedAudioPayloads;              //@synthesize supportedAudioPayloads=_supportedAudioPayloads - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSSet *)supportedAudioPayloads;
-(void)setSupportedAudioPayloads:(NSSet *)arg1 ;
-(void)addPayload:(int)arg1 ;
@end

