/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,retain) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)extensionContext;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)_finish;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)requestUpdatedWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

