/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSXPCInterface, NSString;


@protocol NRNSXPCConnectionProtocol <NSObject>
@property (nonatomic,retain) NSXPCInterface * exportedInterface; 
@property (nonatomic,retain) id exportedObject; 
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
@required
-(void)invalidate;
-(void)resume;
-(void)setExportedObject:(id)arg1;
-(void)setExportedInterface:(id)arg1;
-(void)suspend;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1;
-(id)remoteObjectProxy;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(void)setInterruptionHandler:(/*^block*/id)arg1;
-(void)setRemoteObjectInterface:(id)arg1;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
-(void)_setQueue:(id)arg1;
-(int)processIdentifier;
-(NSString *)processName;
-(id)valueForEntitlement:(id)arg1;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteObjectInterface;
-(void)runCompletionBlock:(/*^block*/id)arg1;

@end

