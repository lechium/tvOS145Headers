/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SFDevice, NSData, NSDictionary, SFSession, NSSet;

@interface SFMessage : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	SFDevice* _peerDevice;
	BOOL _expectsResponse;
	NSData* _bodyData;
	/*^block*/id _completionHandler;
	NSDictionary* _headerFields;
	SFSession* _session;
	NSSet* _deviceIDs;

}

@property (nonatomic,copy) NSSet * deviceIDs;                        //@synthesize deviceIDs=_deviceIDs - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFSession * session;                    //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSData * bodyData;                        //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,copy) id completionHandler;                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL expectsResponse;                   //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                  //@synthesize peerDevice=_peerDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSData *)bodyData;
-(SFSession *)session;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)expectsResponse;
-(void)setSession:(SFSession *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(NSDictionary *)headerFields;
-(void)setDeviceIDs:(NSSet *)arg1 ;
-(NSSet *)deviceIDs;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(void)setBodyData:(NSData *)arg1 ;
@end

