//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CloudServerOptions, ICConnectionConfiguration, NSOperation;
@protocol ICDAccountManaging, ICDBackgroundTaskManaging, ICDHandlerCoordinating;

@protocol ICDServerProtocol <NSObject>
@property(readonly, nonatomic) id <ICDBackgroundTaskManaging> backgroundTaskManager;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager;
@property(nonatomic) long long preferredVideoQuality;
@property(nonatomic) _Bool ignoreAccountChanges;
- (CloudServerOptions *)daemonOptionsForConfiguration:(ICConnectionConfiguration *)arg1;
- (void)enumerateBackgroundOperationsUsingBlock:(void (^)(NSOperation *, _Bool *))arg1;
- (void)enumerateOperationsUsingBlock:(void (^)(NSOperation *, _Bool *))arg1;
- (_Bool)hasOperationsOfClass:(Class)arg1;
- (_Bool)cancelOperationsByClass:(Class)arg1;
- (void)addBackgroundOperation:(NSOperation *)arg1 priority:(int)arg2;
- (void)addOperation:(NSOperation *)arg1 priority:(int)arg2;
- (void)stop;
- (void)start;
@end

