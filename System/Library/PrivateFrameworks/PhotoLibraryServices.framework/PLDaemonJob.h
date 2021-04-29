/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, PLXPCTransaction, PLLibraryServicesManager, NSXPCConnection, PLAssetsdClient, NSString;

@interface PLDaemonJob : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _xpcReply;
	PLXPCTransaction* _transaction;
	/*^block*/id _replyHandler;
	unsigned long long _signpostId;
	PLLibraryServicesManager* _libraryServicesManager;
	NSXPCConnection* _clientConnection;
	PLAssetsdClient* _assetsdClient;

}

@property (assign,nonatomic) NSObject*<OS_xpc_object> xpcReply; 
@property (nonatomic,retain) NSXPCConnection * clientConnection; 
@property (nonatomic,retain) PLLibraryServicesManager * libraryServicesManager; 
@property (nonatomic,copy) id replyHandler; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcReply; 
@property (nonatomic,retain) NSXPCConnection * clientConnection;                             //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,readonly) PLAssetsdClient * assetsdClient;                              //@synthesize assetsdClient=_assetsdClient - In the implementation block
@property (nonatomic,readonly) NSString * jobDescription; 
+(BOOL)supportsSecureCoding;
+(void)runDaemonSideWithXPCEvent:(id)arg1 libraryServicesManager:(id)arg2 ;
-(id)init;
-(void)run;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(NSString *)jobDescription;
-(id)initWithAssetsdClient:(id)arg1 ;
-(PLLibraryServicesManager *)libraryServicesManager;
-(PLAssetsdClient *)assetsdClient;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(void)sendToAssetsd;
-(NSObject*<OS_xpc_object>)xpcReply;
-(void)setXpcReply:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(void)handleReply;
-(id)replyHandler;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)setLibraryServicesManager:(PLLibraryServicesManager *)arg1 ;
-(void)sendToAssetsdWithReply;
-(id)newDictionaryReplyForObject:(id)arg1 ;
-(void)setReplyHandler:(id)arg1 ;
@end

