/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface NSHost : NSObject {

	NSArray* names;
	NSArray* addresses;
	id reserved;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * names; 
@property (copy,readonly) NSString * address; 
@property (copy,readonly) NSArray * addresses; 
@property (copy,readonly) NSString * localizedName; 
+(id)currentHost;
+(id)hostWithName:(id)arg1 ;
+(id)hostWithAddress:(id)arg1 ;
+(BOOL)isHostCacheEnabled;
+(void)setHostCacheEnabled:(BOOL)arg1 ;
+(void)flushHostCache;
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(NSArray *)names;
-(NSString *)address;
-(NSArray *)addresses;
-(NSString *)localizedName;
-(id)_thingToResolve;
-(BOOL)isEqualToHost:(id)arg1 ;
@end

