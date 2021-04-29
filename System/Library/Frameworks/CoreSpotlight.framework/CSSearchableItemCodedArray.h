/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <CoreFoundation/NSArray.h>

@class CSDecoder, NSString;

@interface CSSearchableItemCodedArray : NSArray {

	CSDecoder* _items;
	CSDecoder* _itemsContent;
	NSString* _bundleID;
	NSString* _protectionClass;
	SCD_Struct_CS2 _obj;

}

@property (nonatomic,readonly) SCD_Struct_CS3 obj;                    //@synthesize obj=_obj - In the implementation block
@property (nonatomic,readonly) CSDecoder * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) CSDecoder * itemsContent;              //@synthesize itemsContent=_itemsContent - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * protectionClass;              //@synthesize protectionClass=_protectionClass - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(CSDecoder *)items;
-(id)initWithItems:(id)arg1 ;
-(NSString *)protectionClass;
-(void)setProtectionClass:(NSString *)arg1 ;
-(SCD_Struct_CS3)obj;
-(id)initWithItems:(id)arg1 itemsContent:(id)arg2 ;
-(CSDecoder *)itemsContent;
@end
