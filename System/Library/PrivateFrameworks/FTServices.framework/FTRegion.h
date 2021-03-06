/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray, NSString;

@interface FTRegion : NSObject {

	NSDictionary* _dictionary;
	NSArray* _subRegions;
	FTRegion* _parentRegion;

}

@property (retain) NSDictionary * _dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
@property (retain) FTRegion * _parentRegion;                  //@synthesize parentRegion=_parentRegion - In the implementation block
@property (readonly) NSString * isoCode; 
@property (readonly) NSString * label; 
@property (readonly) NSString * regionID; 
@property (readonly) NSString * basePhoneNumber; 
@property (readonly) FTRegion * parentRegion; 
@property (readonly) NSArray * subRegions;                    //@synthesize subRegions=_subRegions - In the implementation block
-(id)description;
-(void)dealloc;
-(NSDictionary *)_dictionary;
-(NSString *)label;
-(id)_initWithDictionary:(id)arg1 ;
-(NSArray *)subRegions;
-(NSString *)regionID;
-(void)_setParentRegion:(id)arg1 ;
-(NSString *)isoCode;
-(NSString *)basePhoneNumber;
-(FTRegion *)parentRegion;
-(id)regionWithID:(id)arg1 ;
-(void)set_dictionary:(NSDictionary *)arg1 ;
-(FTRegion *)_parentRegion;
-(void)set_parentRegion:(FTRegion *)arg1 ;
@end

