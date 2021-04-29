/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/ANIDSConnectionProvider.h>

@protocol OS_dispatch_queue, ANConnectionDelegate;
@class IDSService, NSObject, NSMutableDictionary, NSString;

@interface ANIDSConnection : NSObject <IDSServiceDelegate, ANIDSConnectionProvider> {

	NSObject*<OS_dispatch_queue> _idsQueue;
	id<ANConnectionDelegate> _delegate;
	IDSService* _service;
	NSMutableDictionary* _outgoingMessages;

}

@property (nonatomic,retain) NSMutableDictionary * outgoingMessages;                //@synthesize outgoingMessages=_outgoingMessages - In the implementation block
@property (assign,nonatomic,__weak) id<ANConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)purgeTemporaryFiles;
-(id)init;
-(id<ANConnectionDelegate>)delegate;
-(void)setDelegate:(id<ANConnectionDelegate>)arg1 ;
-(IDSService *)service;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(NSMutableDictionary *)outgoingMessages;
-(id)sendMessage:(id)arg1 destinationID:(id)arg2 ;
-(void)setOutgoingMessages:(NSMutableDictionary *)arg1 ;
@end

