/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MDLObjectContainerComponent <MDLComponent,NSFastEnumeration>
@property (readonly) unsigned long long count; 
@property (nonatomic,retain,readonly) NSArray * objects; 
@required
-(unsigned long long)count;
-(void)addObject:(id)arg1;
-(void)removeObject:(id)arg1;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;
-(NSArray *)objects;

@end

