/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@protocol PTChoiceRowDataSource;
@class NSArray, NSString;

@interface PTChoiceRow : PTSRow {

	NSArray* _possibleValues;
	NSArray* _possibleTitles;
	NSArray* _possibleShortTitles;
	id<PTChoiceRowDataSource> _dataSource;
	NSString* _choiceIdentifier;

}

@property (assign,nonatomic,__weak) id<PTChoiceRowDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * choiceIdentifier;                              //@synthesize choiceIdentifier=_choiceIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * possibleValues;                                   //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,copy) NSArray * possibleTitles;                                   //@synthesize possibleTitles=_possibleTitles - In the implementation block
@property (nonatomic,copy) NSArray * possibleShortTitles;                              //@synthesize possibleShortTitles=_possibleShortTitles - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PTChoiceRowDataSource>)dataSource;
-(void)setDataSource:(id<PTChoiceRowDataSource>)arg1 ;
-(long long)numberOfSections;
-(NSArray *)possibleValues;
-(BOOL)isEncodable;
-(void)setPossibleValues:(NSArray *)arg1 ;
-(void)setPossibleTitles:(NSArray *)arg1 ;
-(void)setPossibleShortTitles:(NSArray *)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(id)valueForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)possibleValues:(id)arg1 titles:(id)arg2 ;
-(id)possibleShortTitles:(id)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(id)titleForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)shortTitleForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)indexPathForValue:(id)arg1 ;
-(NSArray *)possibleTitles;
-(NSArray *)possibleShortTitles;
-(NSString *)choiceIdentifier;
-(void)setChoiceIdentifier:(NSString *)arg1 ;
@end

