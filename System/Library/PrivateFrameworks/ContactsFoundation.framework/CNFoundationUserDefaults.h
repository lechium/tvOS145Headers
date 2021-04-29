/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>
@class NSDictionary;


@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@required
-(id)countryCode;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(unsigned long long)sortOrder;
-(unsigned long long)nameOrder;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1;
-(void)setNameOrder:(unsigned long long)arg1;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(id)arg1;

@end


@class NSDictionary, CNUserDefaults, NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults> {

	CNUserDefaults* _userDefaults;

}

@property (retain) CNUserDefaults * userDefaults;                                                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@property (assign,getter=isShortNameFormatEnabled,nonatomic) BOOL shortNameFormatEnabled; 
@property (assign,nonatomic) NSDictionary * filteredAccountsAndContainers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registeredDefaults;
+(id)makeRegisteredDefaults;
+(id)sharedDefaults;
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
-(id)init;
-(id)countryCode;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(unsigned long long)sortOrder;
-(unsigned long long)nameOrder;
-(CNUserDefaults *)userDefaults;
-(unsigned long long)newContactNameOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1 ;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(BOOL)isShortNameFormatEnabled;
-(void)setShortNameFormatEnabled:(BOOL)arg1 ;
-(NSDictionary *)filteredAccountsAndContainers;
-(void)setFilteredAccountsAndContainers:(NSDictionary *)arg1 ;
-(void)setUserDefaults:(CNUserDefaults *)arg1 ;
@end
