//
//  NSJSONSerialization+KMLArtist_.h
//  FavoriteArtists
//
//  Created by Keri Levesque on 4/17/20.
//  Copyright © 2020 Keri Levesque. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSJSONSerialization (KMLArtist_)


- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END