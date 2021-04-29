/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject {

	BOOL _confirmed;
	long long _keyFaceClusterSequenceNumber;
	NSString* _keyFaceLocalIdentifier;
	NSString* _personLocalIdentifier;
	long long _personFaceCount;

}

@property (nonatomic,readonly) long long keyFaceClusterSequenceNumber;              //@synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyFaceLocalIdentifier;              //@synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) long long personFaceCount;                           //@synthesize personFaceCount=_personFaceCount - In the implementation block
@property (nonatomic,readonly) BOOL confirmed;                                      //@synthesize confirmed=_confirmed - In the implementation block
-(id)description;
-(BOOL)confirmed;
-(long long)keyFaceClusterSequenceNumber;
-(NSString *)keyFaceLocalIdentifier;
-(NSString *)personLocalIdentifier;
-(long long)personFaceCount;
-(id)initWithSuggestionDictionary:(id)arg1 ;
-(id)suggestionDictionaryRepresentation;
@end
