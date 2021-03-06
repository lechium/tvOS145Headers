/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableSet, NSArray, NSSet;

@interface CoreCECPhysicalDevice : NSObject {

	NSMutableArray* _children;
	NSMutableSet* _logicalDevices;
	unsigned long long _physicalAddress;
	CoreCECPhysicalDevice* _parent;

}

@property (assign,nonatomic) CoreCECPhysicalDevice * parent;                    //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalAddress;              //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSSet * logicalDevices; 
@property (nonatomic,readonly) id propertyList; 
+(id)physicalDeviceTreeWithLogicalDevices:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)propertyList;
-(NSArray *)children;
-(void)addChild:(id)arg1 ;
-(CoreCECPhysicalDevice *)parent;
-(void)setParent:(CoreCECPhysicalDevice *)arg1 ;
-(NSSet *)logicalDevices;
-(unsigned long long)physicalAddress;
-(id)initWithPhysicalAddress:(unsigned long long)arg1 ;
-(void)addLogicalDevice:(id)arg1 ;
-(id)initWithLogicalDevice:(id)arg1 ;
@end

