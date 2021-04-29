/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCOffer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCOfferMetadata, ASCAdamID, NSDictionary, NSNumber, NSArray, NSString;

@interface ASCLocalOffer : NSObject <ASCOffer, NSCopying> {

	ASCOfferMetadata* _metadata;
	/*^block*/id _action;

}

@property (nonatomic,readonly) ASCOfferMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) id action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id; 
@property (nonatomic,copy,readonly) NSDictionary * titles; 
@property (nonatomic,copy,readonly) NSDictionary * subtitles; 
@property (nonatomic,readonly) long long flags; 
@property (nonatomic,readonly) NSNumber * ageRating; 
@property (nonatomic,readonly) NSArray * metrics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(long long)flags;
-(ASCOfferMetadata *)metadata;
-(id)action;
-(NSArray *)metrics;
-(id)price;
-(NSDictionary *)titles;
-(NSDictionary *)subtitles;
-(id)formattedPrice;
-(ASCAdamID *)id;
-(id)initWithMetadata:(id)arg1 action:(/*^block*/id)arg2 ;
-(NSNumber *)ageRating;
-(id)offerWithMetrics:(id)arg1 ;
@end

