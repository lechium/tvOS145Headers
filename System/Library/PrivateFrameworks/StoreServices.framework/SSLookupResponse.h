/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDate, NSMutableArray, SSMetricsPageEvent, NSDictionary, NSArray, SSMetricsConfiguration, NSString;

@interface SSLookupResponse : NSObject <SSXPCCoding> {

	NSDate* _expirationDate;
	NSMutableArray* _itemOrder;
	SSMetricsPageEvent* _metricsPageEvent;
	NSDictionary* _response;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary; 
@property (nonatomic,copy) NSDate * expirationDate;                                                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (setter=_setMetricsPageEvent:,nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
@property (nonatomic,readonly) SSMetricsConfiguration * metricsConfiguration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(id)valueForProperty:(id)arg1 ;
-(NSArray *)allItems;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSDictionary *)responseDictionary;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)_setMetricsPageEvent:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)initWithLocationResponseDictionary:(id)arg1 ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
-(id)itemForKey:(id)arg1 ;
-(SSMetricsConfiguration *)metricsConfiguration;
@end

