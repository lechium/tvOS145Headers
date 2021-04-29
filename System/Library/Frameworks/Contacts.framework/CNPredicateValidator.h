/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSPredicate, NSSet, NSMutableSet, NSError, NSArray;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _validated;
	NSPredicate* _predicate;
	NSSet* _allowedKeysSet;
	NSMutableSet* _usedKeysSet;
	NSError* _error;

}

@property (nonatomic,retain) NSSet * allowedKeysSet;                  //@synthesize allowedKeysSet=_allowedKeysSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * usedKeysSet;              //@synthesize usedKeysSet=_usedKeysSet - In the implementation block
@property (assign,nonatomic) BOOL validated;                          //@synthesize validated=_validated - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * allowedKeys; 
@property (nonatomic,copy,readonly) NSArray * usedKeys; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)setValidated:(BOOL)arg1 ;
-(NSArray *)allowedKeys;
-(BOOL)validated;
-(void)setAllowedKeysSet:(NSSet *)arg1 ;
-(NSSet *)allowedKeysSet;
-(void)setUsedKeysSet:(NSMutableSet *)arg1 ;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)setAllowedKeys:(NSArray *)arg1 ;
-(NSArray *)usedKeys;
-(void)resetUsedKeys;
-(NSMutableSet *)usedKeysSet;
@end

