/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DRSSandboxExtensionHelper : NSObject {

	BOOL _didInit;
	long long _sandboxExtensionHandle;
	NSString* _logPath;

}

@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,readonly) BOOL didInit;                                //@synthesize didInit=_didInit - In the implementation block
@property (nonatomic,readonly) NSString * logPath;                          //@synthesize logPath=_logPath - In the implementation block
-(void)dealloc;
-(long long)sandboxExtensionHandle;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(BOOL)didInit;
-(NSString *)logPath;
-(id)initWithSandboxExtensionToken:(id)arg1 logPath:(id)arg2 errorOut:(id*)arg3 ;
@end
