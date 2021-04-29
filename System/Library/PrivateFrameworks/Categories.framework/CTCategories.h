/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Categories.framework/Categories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSLock, NSArray;

@interface CTCategories : NSObject {

	NSString* _indexVersionId;
	NSLock* _lookupLock;

}

@property (copy,readonly) NSArray * availableCategoryIDs; 
+(void)initialize;
+(id)sharedCategories;
+(id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(id)supportedWebBrowserBundleIdentifiersForDeviceFamily:(long long)arg1 ;
+(long long)currentIOSDevice;
+(id)systemBlockableBundleIdentifiers;
+(id)systemUnblockableBundleIdentifiers;
+(id)systemHiddenBundleIdentifiers;
-(id)init;
-(void)dealloc;
-(void)categoriesForBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)availableCategoryIDs;
-(void)categoriesForDomainURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_emptySharedCache:(id)arg1 ;
-(void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoriesForDomainNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)categoryForBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)categoryForDomainURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

