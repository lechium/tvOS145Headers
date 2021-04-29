/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface UIPrintServiceExtension : NSObject <NSExtensionRequestHandling> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,retain) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)extensionContext;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(id)printerDestinationsForPrintInfo:(id)arg1 ;
-(void)_respondWithResults:(id)arg1 ;
@end
