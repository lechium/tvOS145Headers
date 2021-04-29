/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICStorePlatformResponse.h>

@class NSArray, NSNumber, NSDate, NSString;

@interface ICStorePlatformResponseGroup : NSObject <ICStorePlatformResponse> {

	NSArray* _childResponses;

}

@property (nonatomic,copy,readonly) NSArray * allItems; 
@property (nonatomic,copy,readonly) NSNumber * accountIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * enqueuerAccountIdentifier; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
@property (nonatomic,copy,readonly) id rawResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(NSNumber *)accountIdentifier;
-(NSArray *)allItems;
-(id)rawResponse;
-(NSString *)storefrontIdentifier;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(NSNumber *)enqueuerAccountIdentifier;
-(id)initWithResponses:(id)arg1 ;
@end
