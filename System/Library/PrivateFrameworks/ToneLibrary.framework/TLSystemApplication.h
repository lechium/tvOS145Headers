/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TLSystemApplication : NSObject {

	NSString* _bundleIdentifier;
	NSString* _name;

}

@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
+(id)defaultSystemApplication;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 ;
@end

