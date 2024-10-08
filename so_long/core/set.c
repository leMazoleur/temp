/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsanche <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:16:08 by thsanche          #+#    #+#             */
/*   Updated: 2024/09/06 13:35:21 by thsanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	set_content(t_cnt *content)
{
	content->exit = 'E';
	content->player = 'P';
	content->wall = '1';
	content->space = '0';
	content->collect = 'C';
	content->count_p = 0;
	content->count_e = 0;
	content->count_c = 0;
}

void	set_img(t_data *data)
{
	data->img.height = 80;
	data->img.width = 80;
	data->img.floor = "./rsrc/floor80.xpm";
	data->img.wall = "./rsrc/Burns80.xpm";
	data->img.collect = "./rsrc/donut80.xpm";
	data->img.player = "./rsrc/HomerTeteCorps80.xpm";
	data->img.exit = "./rsrc/TV80.xpm";
	data->img.img_wall = mlx_xpm_file_to_image(data->mlx_ptr, data->img.wall,
			&(data->img.width), &(data->img.height));
	data->img.img_floor = mlx_xpm_file_to_image(data->mlx_ptr, data->img.floor,
			&(data->img.width), &(data->img.height));
	data->img.img_exit = mlx_xpm_file_to_image(data->mlx_ptr, data->img.exit,
			&(data->img.width), &(data->img.height));
	data->img.img_collect = mlx_xpm_file_to_image(data->mlx_ptr,
													data->img.collect,
													&(data->img.width),
													&(data->img.height));
	data->img.img_player = mlx_xpm_file_to_image(data->mlx_ptr,
													data->img.player,
													&(data->img.width),
													&(data->img.height));
}
