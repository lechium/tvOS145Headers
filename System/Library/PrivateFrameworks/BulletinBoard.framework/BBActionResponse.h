/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, BSServiceConnectionEndpoint;

@interface BBActionResponse : NSObject <NSSecureCoding> {

	BOOL _didOpenApplication;
	long long _actionType;
	unsigned long long _actionActivationMode;
	long long _actionBehavior;
	NSString* _actionID;
	NSURL* _actionLaunchURL;
	NSString* _bulletinRecordID;
	NSString* _bulletinPublisherID;
	NSDictionary* _bulletinContext;
	NSString* _bulletinButtonID;
	NSDictionary* _context;
	NSString* _originID;
	BSServiceConnectionEndpoint* _endpoint;

}

@property (assign,nonatomic) long long actionType;                                 //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) unsigned long long actionActivationMode;              //@synthesize actionActivationMode=_actionActivationMode - In the implementation block
@property (assign,nonatomic) long long actionBehavior;                             //@synthesize actionBehavior=_actionBehavior - In the implementation block
@property (assign,nonatomic) BOOL didOpenApplication;                              //@synthesize didOpenApplication=_didOpenApplication - In the implementation block
@property (nonatomic,copy) NSString * actionID;                                    //@synthesize actionID=_actionID - In the implementation block
@property (nonatomic,copy) NSURL * actionLaunchURL;                                //@synthesize actionLaunchURL=_actionLaunchURL - In the implementation block
@property (nonatomic,copy) NSString * bulletinButtonID;                            //@synthesize bulletinButtonID=_bulletinButtonID - In the implementation block
@property (nonatomic,copy) NSString * bulletinRecordID;                            //@synthesize bulletinRecordID=_bulletinRecordID - In the implementation block
@property (nonatomic,copy) NSString * bulletinPublisherID;                         //@synthesize bulletinPublisherID=_bulletinPublisherID - In the implementation block
@property (nonatomic,copy) NSDictionary * bulletinContext;                         //@synthesize bulletinContext=_bulletinContext - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * originID;                                    //@synthesize originID=_originID - In the implementation block
@property (nonatomic,copy) BSServiceConnectionEndpoint * endpoint;                 //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSServiceConnectionEndpoint *)endpoint;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setEndpoint:(BSServiceConnectionEndpoint *)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(void)setActionActivationMode:(unsigned long long)arg1 ;
-(void)setActionBehavior:(long long)arg1 ;
-(void)setActionID:(NSString *)arg1 ;
-(void)setActionLaunchURL:(NSURL *)arg1 ;
-(void)setOriginID:(NSString *)arg1 ;
-(void)setDidOpenApplication:(BOOL)arg1 ;
-(unsigned long long)actionActivationMode;
-(long long)actionBehavior;
-(NSString *)actionID;
-(NSURL *)actionLaunchURL;
-(NSString *)originID;
-(BOOL)didOpenApplication;
-(void)setBulletinContext:(NSDictionary *)arg1 ;
-(void)setBulletinButtonID:(NSString *)arg1 ;
-(void)setBulletinRecordID:(NSString *)arg1 ;
-(void)setBulletinPublisherID:(NSString *)arg1 ;
-(NSString *)bulletinButtonID;
-(NSString *)bulletinRecordID;
-(NSString *)bulletinPublisherID;
-(NSDictionary *)bulletinContext;
@end

