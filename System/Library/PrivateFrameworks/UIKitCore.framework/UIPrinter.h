/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface UIPrinter : NSObject {

	id _printerInfo;
	NSURL* URL;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) NSString * displayLocation; 
@property (readonly) long long supportedJobTypes; 
@property (copy,readonly) NSString * makeAndModel; 
@property (readonly) BOOL supportsColor; 
@property (readonly) BOOL supportsDuplex; 
+(id)printerWithURL:(id)arg1 ;
-(id)init;
-(NSURL *)URL;
-(NSString *)displayName;
-(NSString *)displayLocation;
-(id)_initWithURL:(id)arg1 ;
-(id)_initWithPrinter:(id)arg1 ;
-(id)_internalPrinter;
-(void)contactPrinter:(/*^block*/id)arg1 ;
-(NSString *)makeAndModel;
-(long long)supportedJobTypes;
-(BOOL)supportsColor;
-(BOOL)supportsDuplex;
@end

