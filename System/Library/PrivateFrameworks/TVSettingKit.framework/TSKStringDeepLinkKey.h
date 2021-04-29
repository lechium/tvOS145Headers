/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TSKDynamicDeepLinkKey.h>

@class NSString;

@interface TSKStringDeepLinkKey : NSObject <TSKDynamicDeepLinkKey> {

	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;                   //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(BOOL)acceptsDeepLinkPathComponent:(id)arg1 ;
@end

