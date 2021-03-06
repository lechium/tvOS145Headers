/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface TVHKMediaEntityPropertyDescriptorCollection : NSObject <NSCopying> {

	NSArray* _propertyDescriptors;
	NSDictionary* _propertyDescriptorByName;

}

@property (nonatomic,copy) NSDictionary * propertyDescriptorByName;              //@synthesize propertyDescriptorByName=_propertyDescriptorByName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * propertyDescriptors;               //@synthesize propertyDescriptors=_propertyDescriptors - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)deepCopy;
-(id)propertyDescriptorForName:(id)arg1 ;
-(NSDictionary *)propertyDescriptorByName;
-(void)setPropertyDescriptors:(id)arg1 copy:(BOOL)arg2 ;
-(void)setPropertyDescriptorByName:(NSDictionary *)arg1 ;
-(NSArray *)propertyDescriptors;
-(id)initWithPropertyDescriptors:(id)arg1 copyPropertyDescriptors:(BOOL)arg2 ;
-(id)sortingPropertyDescriptorForName:(id)arg1 ;
@end

