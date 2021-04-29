/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying> {

	AWDHomeKitCameraStreamIDSConnSetupParameters* _audioConnection;
	AWDHomeKitCameraStreamIDSConnSetupParameters* _keepaliveConnection;
	AWDHomeKitCameraStreamIDSConnSetupParameters* _videoConnection;

}

@property (nonatomic,readonly) BOOL hasVideoConnection; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetupParameters * videoConnection;                  //@synthesize videoConnection=_videoConnection - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioConnection; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetupParameters * audioConnection;                  //@synthesize audioConnection=_audioConnection - In the implementation block
@property (nonatomic,readonly) BOOL hasKeepaliveConnection; 
@property (nonatomic,retain) AWDHomeKitCameraStreamIDSConnSetupParameters * keepaliveConnection;              //@synthesize keepaliveConnection=_keepaliveConnection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setVideoConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(void)setAudioConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(void)setKeepaliveConnection:(AWDHomeKitCameraStreamIDSConnSetupParameters *)arg1 ;
-(BOOL)hasVideoConnection;
-(BOOL)hasAudioConnection;
-(BOOL)hasKeepaliveConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)videoConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)audioConnection;
-(AWDHomeKitCameraStreamIDSConnSetupParameters *)keepaliveConnection;
@end

