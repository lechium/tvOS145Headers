/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR24* _pINEntrySeparatorIndexes;
	unsigned long long _validTextRangeLength;
	unsigned long long _validTextRangeLocation;
	int _autocapitalizationType;
	int _keyboardType;
	int _returnKeyType;
	BOOL _autocorrection;
	BOOL _enablesReturnKeyAutomatically;
	BOOL _secureTextEntry;
	BOOL _spellchecking;
	SCD_Struct_MR25 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

