/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSXPCConnection, NSUUID;

@interface ANPlaybackSessionClient : NSObject {

	NSString* _sessionID;
	NSXPCConnection* _connection;
	NSString* _groupID;
	NSUUID* _endpointID;

}

@property (nonatomic,retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * groupID;                        //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSUUID * endpointID;                       //@synthesize endpointID=_endpointID - In the implementation block
+(id)clientWithXPCConnection:(id)arg1 ;
-(id)copy;
-(id)description;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSUUID *)endpointID;
-(void)setEndpointID:(NSUUID *)arg1 ;
@end

