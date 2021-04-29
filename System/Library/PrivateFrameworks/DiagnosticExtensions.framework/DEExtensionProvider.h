/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling> {

	BOOL _canGenerateNewAttachment;
	BOOL _allowUserAttachmentSelection;
	BOOL _isEnhancedLoggingStateOn;
	NSString* _loggingConsent;

}

@property (assign,nonatomic) BOOL isEnhancedLoggingStateOn;                  //@synthesize isEnhancedLoggingStateOn=_isEnhancedLoggingStateOn - In the implementation block
@property (nonatomic,copy) NSString * loggingConsent;                        //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL canGenerateNewAttachment;                  //@synthesize canGenerateNewAttachment=_canGenerateNewAttachment - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)disableLogging;
-(void)isExtensionEnhancedLoggingStateOnWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isLoggingEnabled;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(void)setIsEnhancedLoggingStateOn:(BOOL)arg1 ;
-(BOOL)isEnhancedLoggingStateOn;
-(BOOL)canEnableLogging;
-(void)enableLogging;
-(id)attachmentList;
-(id)attachmentsWithParams:(id)arg1 ;
-(void)setupWithParameters:(id)arg1 ;
-(void)teardownWithParameters:(id)arg1 ;
-(id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3 ;
-(id)_getHostname;
-(BOOL)canGenerateNewAttachment;
-(void)setCanGenerateNewAttachment:(BOOL)arg1 ;
@end
