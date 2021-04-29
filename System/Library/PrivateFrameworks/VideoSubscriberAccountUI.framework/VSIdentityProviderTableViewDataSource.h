/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UITableViewDataSource.h>

@class NSString, UITableView, NSArray, NSDictionary;

@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource> {

	NSString* _titleForTableHeader;
	UITableView* _tableView;
	NSArray* _identityProviders;
	unsigned long long _additionalProvidersMode;
	NSString* _requestedStorefrontCountryCode;
	NSArray* _tvProviderSupportedStorefronts;
	NSArray* _sections;
	NSDictionary* _destinationsBySectionIndexTitle;

}

@property (nonatomic,copy) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSDictionary * destinationsBySectionIndexTitle;              //@synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle - In the implementation block
@property (nonatomic,copy) NSString * titleForTableHeader;                              //@synthesize titleForTableHeader=_titleForTableHeader - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * identityProviders;                                 //@synthesize identityProviders=_identityProviders - In the implementation block
@property (assign,nonatomic) unsigned long long additionalProvidersMode;                //@synthesize additionalProvidersMode=_additionalProvidersMode - In the implementation block
@property (assign,nonatomic) NSString * requestedStorefrontCountryCode;                 //@synthesize requestedStorefrontCountryCode=_requestedStorefrontCountryCode - In the implementation block
@property (nonatomic,copy) NSArray * tvProviderSupportedStorefronts;                    //@synthesize tvProviderSupportedStorefronts=_tvProviderSupportedStorefronts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(unsigned long long)additionalProvidersMode;
-(NSArray *)identityProviders;
-(NSArray *)tvProviderSupportedStorefronts;
-(void)setTvProviderSupportedStorefronts:(NSArray *)arg1 ;
-(void)setAdditionalProvidersMode:(unsigned long long)arg1 ;
-(void)setRequestedStorefrontCountryCode:(NSString *)arg1 ;
-(void)setIdentityProviders:(NSArray *)arg1 ;
-(NSString *)requestedStorefrontCountryCode;
-(id)identityProviderForRowAtIndexPath:(id)arg1 ;
-(id)storefrontAtIndexPath:(id)arg1 ;
-(unsigned long long)_minimumProviderCountForIndexes;
-(void)setDestinationsBySectionIndexTitle:(NSDictionary *)arg1 ;
-(id)_additionalProvidersRowTitle;
-(void)_scrollToTableHeaderView;
-(NSDictionary *)destinationsBySectionIndexTitle;
-(long long)_textAlignmentForRowAtIndexPath:(id)arg1 ;
-(id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1 ;
-(long long)_cellStyleForRowAtIndexPath:(id)arg1 ;
-(id)_titleForRowAtIndexPath:(id)arg1 ;
-(void)setNumberOfLinesForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(NSString *)titleForTableHeader;
-(id)_textColorForRowAtIndexPath:(id)arg1 ;
-(void)setTitleForTableHeader:(NSString *)arg1 ;
@end

