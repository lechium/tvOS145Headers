/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSManagedObject, RadioModel;


@protocol RadioManagedObjectWrapperProtocol <NSObject>
@property (getter=isDatabaseBacked,nonatomic,readonly) BOOL databaseBacked; 
@property (nonatomic,readonly) NSManagedObject * managedObject; 
@property (nonatomic,readonly) RadioModel * model; 
@required
-(RadioModel *)model;
-(NSManagedObject *)managedObject;
-(BOOL)isDatabaseBacked;
-(id)initWithModel:(id)arg1 managedObject:(id)arg2;

@end

