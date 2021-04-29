/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, NSArray;

@interface AMSUIWebBagAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	NSString* _profile;
	NSString* _profileVersion;
	NSArray* _requestedKeys;

}

@property (nonatomic,retain) NSString * profile;                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;              //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,retain) NSArray * requestedKeys;                //@synthesize requestedKeys=_requestedKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)profile;
-(void)setProfile:(NSString *)arg1 ;
-(NSString *)profileVersion;
-(void)setProfileVersion:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(NSArray *)requestedKeys;
-(void)_fetchValuesForKeys:(id)arg1 bag:(id)arg2 startingAtIndex:(long long)arg3 valuesArray:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setRequestedKeys:(NSArray *)arg1 ;
@end
