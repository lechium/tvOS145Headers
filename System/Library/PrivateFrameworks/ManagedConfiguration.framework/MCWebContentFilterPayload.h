/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSArray, NSDictionary;

@interface MCWebContentFilterPayload : MCPayload {

	BOOL _autoFilterEnabled;
	BOOL _filterBrowsers;
	BOOL _filterSockets;
	NSString* _filterType;
	NSArray* _permittedURLStrings;
	NSArray* _allowListBookmarks;
	NSArray* _denyListURLStrings;
	NSDictionary* _pluginConfiguration;
	NSString* _name;
	NSString* _pluginBundleID;

}

@property (nonatomic,copy) NSString * filterType;                             //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) BOOL autoFilterEnabled;                          //@synthesize autoFilterEnabled=_autoFilterEnabled - In the implementation block
@property (nonatomic,retain) NSArray * permittedURLStrings;                   //@synthesize permittedURLStrings=_permittedURLStrings - In the implementation block
@property (nonatomic,retain) NSArray * allowListBookmarks;                    //@synthesize allowListBookmarks=_allowListBookmarks - In the implementation block
@property (nonatomic,retain) NSArray * denyListURLStrings;                    //@synthesize denyListURLStrings=_denyListURLStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginConfiguration;              //@synthesize pluginConfiguration=_pluginConfiguration - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * pluginBundleID;                         //@synthesize pluginBundleID=_pluginBundleID - In the implementation block
@property (assign,nonatomic) BOOL filterBrowsers;                             //@synthesize filterBrowsers=_filterBrowsers - In the implementation block
@property (assign,nonatomic) BOOL filterSockets;                              //@synthesize filterSockets=_filterSockets - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)pluginFilterKeysAndClasses;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(id)installationWarnings;
-(NSString *)filterType;
-(NSString *)pluginBundleID;
-(BOOL)autoFilterEnabled;
-(NSArray *)permittedURLStrings;
-(NSArray *)allowListBookmarks;
-(NSArray *)denyListURLStrings;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setAutoFilterEnabled:(BOOL)arg1 ;
-(void)setPermittedURLStrings:(NSArray *)arg1 ;
-(void)setAllowListBookmarks:(NSArray *)arg1 ;
-(void)setDenyListURLStrings:(NSArray *)arg1 ;
-(NSDictionary *)pluginConfiguration;
-(void)setPluginConfiguration:(NSDictionary *)arg1 ;
-(void)setPluginBundleID:(NSString *)arg1 ;
-(BOOL)filterBrowsers;
-(void)setFilterBrowsers:(BOOL)arg1 ;
-(BOOL)filterSockets;
-(void)setFilterSockets:(BOOL)arg1 ;
@end
