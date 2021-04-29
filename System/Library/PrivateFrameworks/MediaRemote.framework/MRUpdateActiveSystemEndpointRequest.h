/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MRUpdateActiveSystemEndpointRequestProtobuf;

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying> {

	BOOL _pairedDeviceSync;
	NSString* _outputDeviceUID;
	NSString* _reason;
	long long _changeType;
	NSString* _clientBundleIdentifier;

}

@property (nonatomic,copy) NSString * clientBundleIdentifier;                                        //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,getter=isPairedDeviceSync,nonatomic) BOOL pairedDeviceSync;                        //@synthesize pairedDeviceSync=_pairedDeviceSync - In the implementation block
@property (nonatomic,readonly) _MRUpdateActiveSystemEndpointRequestProtobuf * protobuf; 
@property (nonatomic,copy) NSString * outputDeviceUID;                                               //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long changeType;                                                   //@synthesize changeType=_changeType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)reason;
-(long long)changeType;
-(void)setReason:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(NSString *)clientBundleIdentifier;
-(_MRUpdateActiveSystemEndpointRequestProtobuf *)protobuf;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(NSString *)outputDeviceUID;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isPairedDeviceSync;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setPairedDeviceSync:(BOOL)arg1 ;
-(void)perform:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceUID:(id)arg1 reason:(id)arg2 ;
@end

