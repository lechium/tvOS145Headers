/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICStoreResponseProtocol.h>

@class NSDictionary, NSDate, ICURLBag, NSData, ICStoreDialogResponse, NSString, NSArray, NSError;

@interface ICMusicSubscriptionPlaybackResponse : NSObject <ICStoreResponseProtocol> {

	NSDictionary* _responseDictionary;
	NSDate* _requestDate;
	ICURLBag* _urlBag;

}

@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSString * householdID; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) NSDictionary * metricsDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(NSString *)householdID;
-(ICStoreDialogResponse *)dialog;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(NSDictionary *)metricsDictionary;
-(NSError *)serverError;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(NSDate *)leaseExpirationDate;
-(id)itemWithStoreAdamID:(long long)arg1 ;
@end

