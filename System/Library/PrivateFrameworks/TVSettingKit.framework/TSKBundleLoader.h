/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSBundle, NSString;

@interface TSKBundleLoader : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                           //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
+(id)loaderWithBundle:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)localizedTitle;
-(id)loadViewController;
@end

