/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/INCExtensionProxy.h>

@protocol INCExtensionProxy
@property (nonatomic,copy) id backgroundAppHandler; 
@optional
-(void)prewarmAppWithIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)startSendingUpdatesToObserver:(id)arg1;
-(void)stopSendingUpdates;
-(void)getOptionsForParameterNamed:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getOptionsForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)backgroundAppHandler;
-(void)setBackgroundAppHandler:(/*^block*/id)arg1;

@required
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol _INExtensionContextVending;
@class INCExtensionConnection, NSExtension, NSValue;

@interface INCExtensionProxy : NSObject <INCExtensionProxy> {

	BOOL _shouldCache;
	INCExtensionConnection* _connection;
	NSExtension* _extension;
	id<_INExtensionContextVending> _vendorRemote;
	NSValue* _auditTokenValue;
	/*^block*/id _imageCachingHandler;
	/*^block*/id _imageProcessingHandler;
	/*^block*/id _responseHandler;
	/*^block*/id _backgroundAppHandler;

}

@property (getter=_isExtensionBeingDebugged,nonatomic,readonly) BOOL _extensionBeingDebugged; 
@property (nonatomic,readonly) INCExtensionConnection * _connection;                                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSExtension * _extension;                                                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) id<_INExtensionContextVending> _vendorRemote;                               //@synthesize vendorRemote=_vendorRemote - In the implementation block
@property (nonatomic,readonly) NSValue * _auditTokenValue;                                                 //@synthesize auditTokenValue=_auditTokenValue - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                                                             //@synthesize shouldCache=_shouldCache - In the implementation block
@property (nonatomic,copy) id imageCachingHandler;                                                         //@synthesize imageCachingHandler=_imageCachingHandler - In the implementation block
@property (nonatomic,copy) id imageProcessingHandler;                                                      //@synthesize imageProcessingHandler=_imageProcessingHandler - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) id backgroundAppHandler;                                                        //@synthesize backgroundAppHandler=_backgroundAppHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldResetRequestAfterHandle; 
+(void)initialize;
-(INCExtensionConnection *)_connection;
-(NSExtension *)_extension;
-(void)setResponseHandler:(id)arg1 ;
-(BOOL)shouldCache;
-(id)responseHandler;
-(void)setShouldCache:(BOOL)arg1 ;
-(BOOL)shouldResetRequestAfterHandle;
-(void)setShouldResetRequestAfterHandle:(BOOL)arg1 ;
-(id<_INExtensionContextVending>)_vendorRemote;
-(NSValue *)_auditTokenValue;
-(void)prewarmAppWithIntent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startSendingUpdatesToObserver:(id)arg1 ;
-(void)stopSendingUpdates;
-(void)getOptionsForParameterNamed:(id)arg1 searchTerm:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getOptionsForParameterNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)backgroundAppHandler;
-(void)setBackgroundAppHandler:(id)arg1 ;
-(void)confirmIntentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleIntentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithConnection:(id)arg1 extension:(id)arg2 vendorRemote:(id)arg3 auditTokenValue:(id)arg4 ;
-(BOOL)_shouldForwardToAppWithIntent:(id)arg1 intentResponse:(id)arg2 ;
-(BOOL)_extensionProcessHasEntitlement:(id)arg1 ;
-(BOOL)_isExtensionBeingDebugged;
-(id)_processIntent:(id)arg1 intentResponse:(id)arg2 withCacheItems:(id)arg3 ;
-(BOOL)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_issueSandboxExtensionsForFileURLsIfNeededToIntent:(id)arg1 ;
-(id)imageCachingHandler;
-(void)setImageCachingHandler:(id)arg1 ;
-(id)imageProcessingHandler;
-(void)setImageProcessingHandler:(id)arg1 ;
@end

