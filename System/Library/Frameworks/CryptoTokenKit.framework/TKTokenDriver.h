/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TKTokenDriverDelegate;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKTokenDriverContext, NSMutableDictionary, TKSharedResourceSlot, NSDictionary, NSString, NSArray;

@interface TKTokenDriver : NSObject {

	id _keepAlive;
	id<TKTokenDriverDelegate> _delegate;
	TKTokenDriverContext* _context;
	NSMutableDictionary* _tokenConnections;
	TKSharedResourceSlot* _keepAliveResourceSlot;
	NSDictionary* _extensionAttributes;

}

@property (assign,nonatomic,__weak) TKTokenDriverContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokenConnections;                  //@synthesize tokenConnections=_tokenConnections - In the implementation block
@property (nonatomic,retain) id keepAlive; 
@property (nonatomic,retain) TKSharedResourceSlot * keepAliveResourceSlot;              //@synthesize keepAliveResourceSlot=_keepAliveResourceSlot - In the implementation block
@property (readonly) NSString * classID; 
@property (retain) NSDictionary * extensionAttributes;                                  //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * tokenSessions; 
@property (__weak) id<TKTokenDriverDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(id)createDriver;
-(id)init;
-(void)dealloc;
-(id<TKTokenDriverDelegate>)delegate;
-(void)setDelegate:(id<TKTokenDriverDelegate>)arg1 ;
-(void)terminate;
-(TKTokenDriverContext *)context;
-(void)setContext:(TKTokenDriverContext *)arg1 ;
-(NSString *)classID;
-(id)keepAlive;
-(NSDictionary *)extensionAttributes;
-(void)setExtensionAttributes:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)tokenConnections;
-(id)endpointForToken:(id)arg1 ;
-(void)getTokenWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)createTokenWithSlot:(id)arg1 AID:(id)arg2 error:(id*)arg3 ;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(void)setKeepAlive:(id)arg1 ;
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)releaseTokenWithInstanceID:(id)arg1 ;
-(void)configureWithReply:(/*^block*/id)arg1 ;
-(NSArray *)tokenSessions;
-(TKSharedResourceSlot *)keepAliveResourceSlot;
-(void)setKeepAliveResourceSlot:(TKSharedResourceSlot *)arg1 ;
@end

