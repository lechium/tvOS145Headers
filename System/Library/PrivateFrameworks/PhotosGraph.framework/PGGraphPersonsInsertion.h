/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphPersonsInsertion : PGGraphChange {

	NSSet* _personLocalIdentifiers;
	NSSet* _persons;

}

@property (nonatomic,readonly) NSSet * personLocalIdentifiers;              //@synthesize personLocalIdentifiers=_personLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * persons;                             //@synthesize persons=_persons - In the implementation block
-(id)description;
-(unsigned long long)type;
-(unsigned long long)changeCount;
-(NSSet *)persons;
-(NSSet *)personLocalIdentifiers;
-(id)initWithPersonLocalIdentifiers:(id)arg1 ;
-(id)initWithPersons:(id)arg1 ;
@end

