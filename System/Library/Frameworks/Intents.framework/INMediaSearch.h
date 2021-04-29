/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, INDateComponentsRange;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _mediaType;
	long long _sortOrder;
	NSString* _mediaName;
	NSString* _artistName;
	NSString* _albumName;
	NSArray* _genreNames;
	NSArray* _moodNames;
	INDateComponentsRange* _releaseDate;
	long long _reference;
	NSString* _mediaIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * activityNames; 
@property (nonatomic,readonly) long long mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) long long sortOrder;                                   //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaName;                             //@synthesize mediaName=_mediaName - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genreNames;                             //@synthesize genreNames=_genreNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moodNames;                              //@synthesize moodNames=_moodNames - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * releaseDate;              //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) long long reference;                                   //@synthesize reference=_reference - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaIdentifier;                       //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reference;
-(long long)sortOrder;
-(id)_dictionaryRepresentation;
-(long long)mediaType;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)albumName;
-(NSString *)artistName;
-(id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10 ;
-(NSString *)mediaName;
-(NSArray *)genreNames;
-(NSArray *)moodNames;
-(INDateComponentsRange *)releaseDate;
-(NSString *)mediaIdentifier;
-(NSArray *)activityNames;
@end

